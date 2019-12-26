--- ./if_var.h.orig	2016-09-18 01:33:19.297720000 +0200
+++ ./if_var.h	2016-09-19 13:31:50.293284000 +0200
@@ -177,6 +177,40 @@
 
 
 /*
+ * The ifaddr structure contains information about one address
+ * of an interface.  They are maintained by the different address families,
+ * are allocated and attached when an address is set, and are linked
+ * together so all addresses for an interface can be located.
+ *
+ * NOTE: a 'struct ifaddr' is always at the beginning of a larger
+ * chunk of malloc'ed memory, where we store the three addresses
+ * (ifa_addr, ifa_dstaddr and ifa_netmask) referenced here.
+ */
+struct ifaddr {
+	struct	sockaddr *ifa_addr;	/* address of interface */
+	struct	sockaddr *ifa_dstaddr;	/* other end of p-to-p link */
+#define	ifa_broadaddr	ifa_dstaddr	/* broadcast address interface */
+	struct	sockaddr *ifa_netmask;	/* used to determine subnet */
+	struct	ifnet *ifa_ifp;		/* back-pointer to interface */
+	struct	carp_softc *ifa_carp;	/* pointer to CARP data */
+	TAILQ_ENTRY(ifaddr) ifa_link;	/* queue macro glue */
+	void	(*ifa_rtrequest)	/* check or clean routes (+ or -)'d */
+		(int, struct rtentry *, struct rt_addrinfo *);
+	u_short	ifa_flags;		/* mostly rt_flags for cloning */
+#define	IFA_ROUTE	RTF_UP		/* route installed */
+#define	IFA_RTSELF	RTF_HOST	/* loopback route to self installed */
+	u_int	ifa_refcnt;		/* references to this structure */
+
+	counter_u64_t	ifa_ipackets;
+	counter_u64_t	ifa_opackets;	 
+	counter_u64_t	ifa_ibytes;
+	counter_u64_t	ifa_obytes;
+};
+
+
+
+
+/*
  * Structure defining a network interface.
  *
  * Size ILP32:  592 (approx)
@@ -420,37 +454,6 @@
 
 #define	TOEDEV(ifp)	((ifp)->if_llsoftc)
 
-/*
- * The ifaddr structure contains information about one address
- * of an interface.  They are maintained by the different address families,
- * are allocated and attached when an address is set, and are linked
- * together so all addresses for an interface can be located.
- *
- * NOTE: a 'struct ifaddr' is always at the beginning of a larger
- * chunk of malloc'ed memory, where we store the three addresses
- * (ifa_addr, ifa_dstaddr and ifa_netmask) referenced here.
- */
-struct ifaddr {
-	struct	sockaddr *ifa_addr;	/* address of interface */
-	struct	sockaddr *ifa_dstaddr;	/* other end of p-to-p link */
-#define	ifa_broadaddr	ifa_dstaddr	/* broadcast address interface */
-	struct	sockaddr *ifa_netmask;	/* used to determine subnet */
-	struct	ifnet *ifa_ifp;		/* back-pointer to interface */
-	struct	carp_softc *ifa_carp;	/* pointer to CARP data */
-	TAILQ_ENTRY(ifaddr) ifa_link;	/* queue macro glue */
-	void	(*ifa_rtrequest)	/* check or clean routes (+ or -)'d */
-		(int, struct rtentry *, struct rt_addrinfo *);
-	u_short	ifa_flags;		/* mostly rt_flags for cloning */
-#define	IFA_ROUTE	RTF_UP		/* route installed */
-#define	IFA_RTSELF	RTF_HOST	/* loopback route to self installed */
-	u_int	ifa_refcnt;		/* references to this structure */
-
-	counter_u64_t	ifa_ipackets;
-	counter_u64_t	ifa_opackets;	 
-	counter_u64_t	ifa_ibytes;
-	counter_u64_t	ifa_obytes;
-};
-
 /* For compatibility with other BSDs. SCTP uses it. */
 #define	ifa_list	ifa_link
 
