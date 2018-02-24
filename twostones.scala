object Different {
    def main(args: Array[String]) {
        var line = scala.io.StdIn.readInt()
        if (line % 2 == 0) print("Bob") else print("Alice")
    }
}