%-- 02/21/2024 02:38:42 PM --%
%% Multidimensionālās matricas
diary lekc2.m
%% Matricu montāža
B = [4 5; 6 7];
C = [A,B]
C = [A , B]
A
B
A=
A = [1 2; 3 4];
C = [A,B]
format compact
D = [A; B]
%% numeric datu tipi
int8(2,6)
int8(2.6)
int8(400)
int8(5)
uint16(999)
uint16(99999)
R = [0 0 0; 0 0 0; 1 1 1];
R =
R = [0 0 0; 0 0 0; 1 1 1]
B = [0 0 0; 1 1 1; 0 0 0];
G = [1 1 1; 0 0 0; 0 0 0];
bilde(:,:,1)=R;
bilde(:,:,2)=G;
bilde(:,:,3)=B;
%% imread- dot iespēju nolasīt matricu
image(bilde)
filma(:,:,:,1) = bilde;
%% pieliksim zaļu visai 1 kolonnai
G(:,1)=1
bilde(:,:,1)=G;
filma(:,:,:,2) = bilde;
image(bilde)
bilde(:,:,2)=G;
image(bilde)
% piliksim zilu visai 2 kolonnai
B(:,2)=1;
bilde(:,:,3)=B;
filma(:,:,:,3) = bilde;
image(bilde)
%% Pieliksim sarkanu 3 kolonnai
bilde(:,3,1)=1;
filma(:,:,:,4) = bilde;
image(bilde)
%% uztaisisim centrā baltu kvadrātu
bilde(2,2,:)=1;
filma(:,:,:,5) = bilde;
image(bilde)
bilde(3,3,:)=0;
filma(:,:,:,6) = bilde;
image(bilde)
% diagonāli baltu
diag([1 1 1])
R = diag([1 1 1]);
G = diag([1 1 1]);
B = diag([1 1 1]);
1|0
bilde(:,:,1)= bilde(:,:,1)|R;
bilde(:,:,2)= bilde(:,:,2)|G;
bilde(:,:,3)= bilde(:,:,3)|B;
bilde = double(bilde);
filma(:,:,:,7) = bilde;
image(bilde)
% Pelēka krāsa
R=
R =
R
R(:)
R(:)=linspace(0,1,9)
G(:)=linspace(0,1,9);
B(:)=linspace(0,1,9);
bilde(:,:,1)=R;
bilde(:,:,2)=G;
bilde(:,:,3)=B;
image(bilde)
filma(:,:,:,8) = bilde;
bilde(:)=linspace(0,1,27);
image(bilde)
bilde(:)=[linspace(0,1,9),linspace(0,1,9),...
linspace(0,1,9),...
linspace(0,1,9)];
image(bilde)
bilde(:)=[linspace(0,1,9),...
linspace(0,1,9),...
linspace(0,1,9)];
image(bilde)
filma(:,:,:,9) = bilde;
repmat([1 2; 3 4],2,2)
bilde(:)= repmat(linspace(0,1,9),...
1,3);
image(bilde)
bilde(:)= repmat(linspace(1,0,9),...
1,3);
image(bilde)
filma(:,:,:,10) = bilde;
%reshape
reshape([1234],2,2)
reshape([1 2 3 4],2,2)
bilde = reshape(repmat(linspace(0,1,9),1,3),3,3,3);
image(bilde)
%gadijumu skaitlu bilde
bilde+rand(3,3,3);
image(bilde)
bilde=rand(3,3,3);
image(bilde)
filma(:,:,:,11) = bilde;
rng(3);
bilde=rand(3,3,3);
image(bilde)
filma(:,:,:,12) = bilde;
bilde=round(rand(3,3,3));
image(bilde)
filma(:,:,:,13) = bilde;
figure
%% katru otro elementu uz melnu
A =[1 2 3 4 5 6 7 8 9 10];
A(1:2:end)=10
A = ones(1,9)
A(1:2:end)=0;
bilde(:)=bilde(:).*repmat(A(:),[3 1]);
image(bilde)
filma(:,:,:,14) = bilde;
%% Atskaņot filmu
size(bilde)
size(filma)
for i = 1:size(filma,4)
image(filma(:,:,:,i));
pause(1);
shg
end
save mana_filma.mat filma
edit
mana_filma_editors
diary off
diary lab_2.m
syms a b c d
A=[a b; c d]
syms h g p q
B=[h g; p q];
C=A*B
D=A.*B
%%
%% 1.simbolisko mainīgo definēšana
% 1.veids
a = sym('a');
sqrt(a^2)
a = sym('a','positive');
sqrt(a^2)
%% 2.veids
syms a b c d
A = [a b; c d]
A'
syms a b c d real
A = [a b; c d]
A'
% 3 veids kā definēt
A = sym('a',[2 3])
A = sym('a',[3 3])
A*A
A.*A
syms x
diff(x^2)
y=x^2
diff(y)
syms x y
z = x^5*y^3;
diff(z,x)
diff(z,y)
syms a b x
z= ax^2 + b;
z= a*x^2 + b;
diff(z,x)
syms x
int(2*x,x)
syms x y
z= x^5 * y^3;
dif(z,y)
diff(z,y)
p=diff(z,y)
int(p,y)
syms x
int(x^2,x,-3,3)
syms x
pi= 3.14
int(sin(x),x,0,pi)
int(sin(x),x,0,3.14)
pi
syms x
y= sin(x)^2
diff(y,x,0,pi/3)
a= pi/3;
diff(y,x,0,a)
int(y,x,0,a)
double(int(y,x,0,a))
syms x
limit(1/x-1,x,1,'left')
limit(1/x-1,x,1,'right')
slove(x^2-3*x+2==0,x)
solve(x^2-3*x+2==0,x)
syms x y
[x_atb,y_atb]=solve(5*x+2*y==16,x-y==-1)
syms x a
solve(a+exp(b*x^2=a*x)==100,x)
solve(a+exp(b*x^2=a*x)=100,x)
solve(a+exp(b*x^2=a*x)==100,x)
solve(a+exp(b*x^2+a*x)==100,x)
history Matlab_lab_1.m