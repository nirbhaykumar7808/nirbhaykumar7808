# Plotting a graph using Matplotlib 
if __name__ == '__main__':

    #  n is the number of vertices

    #  m is the number of edges

    n, m = map(int, input().split())

    adjMat = [[0 for i in range(n)]for j in range(n)]

    for i in range(n):

        u, v = map(int, input().split())

        adjMat[u][v] = 1

        adjMat[v][u] = 1
