�# i f n d e f   _ _ B C L _ I S O C K E T _ S Y S T E M _ H _ _ 
 
 # d e f i n e   _ _ B C L _ I S O C K E T _ S Y S T E M _ H _ _ 
 
 
 
 # i n c l u d e   " B c l H e a d e r . h " 
 
 # i n c l u d e   " s t d i o . h " 
 
 # i n c l u d e   " T B u f f e r . h " 
 
 
 
 # i f n d e f   B U I L D _ S O C K E T _ S Y S T E M _ D L L 
 
 # i f d e f   _ M S C _ V E R 
 
 #     p r a g m a   c o m m e n t ( l i b , " S o c k e t S y s t e m . l i b " ) 
 
 # e n d i f 
 
 # e n d i f 
 
 
 
 / / 芠x梴誰
 
 e n u m   e n E n c r y p t A l g o   V C _ P A C K E D _ O N E 
 
 { 
 
       e n E n c r y p t A l g o _ N o n   =   0 ,   / / 
N燫芠
 
       e n E n c r y p t A l g o _ S i m p l e   =   1   , / / �US燫芠x
 
       e n E n c r y p t A l g o _ M a x , 
 
 }   P A C K E D _ O N E   ; 
 
 
 
 / / OS畫,{ NW[倐T�gW[&{
 
 # d e f i n e   M A G I C _ C H A R           0 x 0 B 
 
 
 
 / / S4Y{|媁
 
 e n u m   e n P a c k e t H e a d e r T y p e   V C _ P A C K E D _ O N E 
 
 { 
 
       e n P a c k e t H e a d e r T y p e _ N o n   =   0 ,   / / 
N&^虁4Y
 
       e n P a c k e t H e a d e r T y p e _ L e n   =   1   ,       / / 鶹歔暒^剉S4YN e t P a c k e t H e a d e r 
 
 
 
 }   P A C K E D _ O N E   ; 
 
 
 
 
 
 / / W[倐鵞P� 
 # p r a g m a   p a c k ( p u s h , 1 ) 
 
 
 
 / / 鍕觺刧鵞擽(uB\
N颯翂
 
 s t r u c t   _ _ P a c k e t H e a d e r 
 
 { 	 
 
 	 U I N T 8                       m _ m a g i c ;               / / T�gW[&{
 
 } ; 
 
 
 
 / / 惎婳S畫4Y歔IN
 
 s t r u c t   N e t P a c k e t H e a d e r   :   p r i v a t e   _ _ P a c k e t H e a d e r 
 
 { 
 
 	 f r i e n d   c l a s s   c o n n e c t i o n ; 
 
 
 
 	 N e t P a c k e t H e a d e r ( ) 
 
 	 { 
 
 	 	 m _ m a g i c   =   M A G I C _ C H A R ; 
 
 	 	 m _ l e n g t h   =   s i z e o f ( * t h i s ) ; 
 
 	 	 m _ e n c r y p t A l g o   =   e n E n c r y p t A l g o _ N o n ; 	 	 
 
 	 } 
 
 	 
 
 	 U I N T 3 2                     m _ l e n g t h ;             / / te*NS剉暒^�S靊N e t P a c k e t H e a d e r 
 
 	 e n E n c r y p t A l g o       m _ e n c r y p t A l g o ;     / / @b菓(u剉燫芠梴誰	 
 
 } ; 
 
 
 
 # p r a g m a   p a c k ( p o p ) 
 
 
 
 
 
 n a m e s p a c e   b o o s t 
 
 { 
 
 	 n a m e s p a c e   a s i o 
 
 	 { 
 
 	 	 c l a s s   i o _ s e r v i c e ; 
 
 	 } ; 
 
 } ; 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 / / S o c k e t h茓
 
 s t r u c t   T S o c k I D 
 
 { 
 
 	 u n i o n 
 
 	 { 
 
 	 	 U I N T 6 4   m _ i d ; 
 
 	 	 s t r u c t 
 
 	 	 { 
 
 	 	 	 U I N T 3 2     s l o t ;     / / 昢B\X[>eMOn
 
 	 	 	 v o i d   *     p C o n n e c t ;       / / s o c k e t 
 
 	 	 } ; 
 
 	 } ; 
 
 
 
 	 T S o c k I D ( ) 
 
 	 { 
 
 	 	 m _ i d   =   U I N T 6 4 ( 0 ) ;   / / 鄀He<P
 
 	 } 
 
 
 
 	 e x p l i c i t   T S o c k I D ( U I N T 6 4   i d ) 
 
 	 { 
 
 	 	 m _ i d   =   i d ; 
 
 	 } 
 
 
 
 	 U I N T 6 4   T o U i n t 6 4 ( ) 
 
 	 { 
 
 	 	 r e t u r n   m _ i d ; 
 
 	 } 
 
 
 
 	 f r i e n d   b o o l   o p e r a t o r   = =   (   c o n s t   T S o c k I D   & s i d 1 ,   c o n s t   T S o c k I D   &   s i d 2 ) 
 
 	 { 
 
 	 	 r e t u r n   s i d 1 . m _ i d   = =   s i d 2 . m _ i d ; 
 
 	 } 
 
 	 f r i e n d   b o o l   o p e r a t o r   ! =   (   c o n s t   T S o c k I D   & s i d 1 ,   c o n s t   T S o c k I D   &   s i d 2 ) 
 
 	 { 
 
 	 	 r e t u r n   s i d 1 . m _ i d   ! =   s i d 2 . m _ i d ; 
 
 	 } 
 
 	 f r i e n d   b o o l   o p e r a t o r   <   (   c o n s t   T S o c k I D   & s i d 1 ,   c o n s t   T S o c k I D   &   s i d 2 ) 
 
 	 { 
 
 	 	 r e t u r n   s i d 1 . m _ i d   <   s i d 2 . m _ i d ; 
 
 	 } 
 
 	 / / 鄀He<P
 
 	 b o o l 	 I s I n v a l i d ( ) c o n s t 
 
 	 { 
 
 	 	 r e t u r n   m _ i d   = =   U I N T 6 4 ( 0 ) ; 
 
 	 } 
 
 } ; 
 
 
 
 # d e f i n e   I N V A L I D _ S O C K I D   ( T S o c k I D ( ) ) 
 
 
 
 / / 婲鯪轛� 
 s t r u c t   I S o c k e t S i n k 
 
 { 	 
 
 	 / / 癳迯鷁藌, s o c k e t i d :Ns o c k e t h茓, r e m o t e :N軓飠i p , a c t :NL i s t e n bC o n n e c t 齉pe�u鰁 O悇va c t 
 
 	 v i r t u a l   v o i d   O n C o n n e c t O K ( T S o c k I D   s o c k e t i d , U I N T 3 2   r e m o t e _ i p , U I N T 1 6   p o r t , U I N T 3 2   a c t ) 
 
 	 { 
 
 	 } 
 
 
 
 	 / / penc0R緩, 
 
 	 v i r t u a l   v o i d   O n N e t D a t a R e c v ( T S o c k I D   s o c k e t i d ,   O S t r e a m B u f f e r   &   o s b ) = 0 ; 
 
 
 
 	 / / 迯sQ頃
 
 	 v i r t u a l   v o i d   O n C l o s e ( T S o c k I D   s o c k i d )   =   0 ; 
 
 } ; 
 
 
 
 s t r u c t   I S o c k e t S y s t e m 
 
 { 
 
 	 / / 蕬>e
 
 	 v i r t u a l   v o i d   R e l e a s e ( ) = 0 ; 
 
 
 
 	 / / /T≧
g
 
 	 v i r t u a l   b o o l   S t a r t ( b o o s t : : a s i o : : i o _ s e r v i c e   *   p I o S e r v i c e , I N T 3 2   m a x S o c k N u m , I N T 3 2   i o T h r e a e d N u m = 1 , I N T 3 2   C h e c k T i m e O u t = 1 0 ) = 0 ; 
 
 
 
 	 / / 裿,T
 
 	 v i r t u a l   b o o l   L i s t e n ( c o n s t   c h a r *   s z I P , U I N T 1 6   p o r t , I S o c k e t S i n k   *   p S o c k e t S i n k , e n P a c k e t H e a d e r T y p e   H e a d e r T y p e = e n P a c k e t H e a d e r T y p e _ N o n , I N T 3 2   K e e p L i v e T i m e = 0 x 7 f f f f f f f , U I N T 3 2   a c t = 0 ) = 0 ; 
 
 
 
 	 / / ;N≧鷁藌迯
 
 	 v i r t u a l   T S o c k I D   C o n n e c t ( c o n s t   c h a r *   s z I P , U I N T 1 6   p o r t , I S o c k e t S i n k   *   p S o c k e t S i n k , e n P a c k e t H e a d e r T y p e   H e a d e r T y p e = e n P a c k e t H e a d e r T y p e _ N o n , I N T 3 2   K e e p L i v e T i m e = 0 x 7 f f f f f f f , U I N T 3 2   a c t = 0 ) = 0 ; 
 
 
 
 	 / / 緥n轛尌c鉙
 
 	 v i r t u a l   b o o l         S e t S o c k e t S i n k ( T S o c k I D   s o c k e t i d , I S o c k e t S i n k   *   p S o c k e t S i n k )   =   0 ; 
 
 
 
 	 / / 緥nS4Y{|媁
 
 	 v i r t u a l   b o o l         S e t S o c k e t H e a d e r T y p e ( T S o c k I D   s o c k e t i d , e n P a c k e t H e a d e r T y p e   H e a d e r T y p e )   =   0 ; 
 
 
 
 	 / / 緥n胈髰厤鰁USMO: 襶
 
 	 v i r t u a l   v o i d   S e t K e e p L i v e T i m e ( T S o c k I D   s o c k e t i d , i n t   K e e p L i v e T i m e )   =   0 ; 
 
 
 
 	 / / 裇恜enc, 
 
 	 v i r t u a l   b o o l   S e n d ( T S o c k I D   s o c k e t i d , O S t r e a m B u f f e r   &   o s b ) = 0 ; 
 
 
 
 	 	 
 
 	 / / ;N≧sQ頃迯, O鎵裇I S o c k e t S i n k : : O n C l o s e ( ) 齉pe剉�u
 
 	 v i r t u a l   b o o l   S h u t D o w n ( T S o c k I D   s o c k e t i d ) = 0 ; 
 
 
 
 	 / / 穬梍鵞飠酧o`
 
 	 v i r t u a l   U I N T 3 2   G e t R e m o t e ( T S o c k I D   s o c k e t i d )   =   0 ; 
 
 
 
 	 / / \Pbk
g
 
 	 v i r t u a l   b o o l   S t o p ( )   =   0 ; 
 
 
 
 	 	 	 / / 穬梍;N  i o _ s e r v i c e 
 
 	 v i r t u a l   c o n s t   b o o s t : : a s i o : : i o _ s e r v i c e   *   G e t M a i n I o S e r v i c e ( )   = 0 ; 
 
 
 
 } ; 
 
 
 
 B C L _ A P I     I S o c k e t S y s t e m   *   C r e a t e S o c k e t S y s t e m ( ) ; 
 
 
 
 
 
 # e n d i f 
 
 
 
 
