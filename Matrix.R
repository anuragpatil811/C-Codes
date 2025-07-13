#R matrix
#matrix(data, nrow, ncol, byrow, dim_name)
mat<- matrix(c(2 : 13), nrow=4, ncol = 3, byrow = FALSE)
mat
x<-matrix(c(5:10), nrow=4, byrow = TRUE)
y<-matrix(c(7:18), nrow=4, byrow = FALSE)
x
y
row_name<- c("r1", "r2", "r3", "r4")
col_name<- c("c1", "c2", "c3")
z<- matrix(c(7:18), nrow = 4, byrow = TRUE, dimnames = list(row_name, col_name))
z
print(z[4, 3])
print(z[,2])
print(z[2,])
z
z[4, 3]<-0
z[z>15]<-0
z
#cbind() and rbind() are used to add a column and row respectively
z
rbind(z, c(2, 3, 4))
z
cbind(z, c(8, 5, 2, 0))
z
t(z)
a1<- matrix(c(5:16), nrow = 4, ncol = 3, byrow = TRUE)
a1
a2<- matrix(c(1:12), nrow = 4, ncol = 3, byrow = TRUE)
a2
sum<-a1 + a2
sum