//checking for a winner
bool check(string arr[][3], string n)
{
    if (arr[0][0] == n && arr[0][1] == n && arr[0][2] == n)
    {
        return true;
    }
    else if (arr[0][0] == n && arr[1][0] == n && arr[2][0] == n)
    {
        return true;
    }
    else if (arr[2][0] == n && arr[2][1] == n && arr[2][2] == n)
    {
        return true;
    }
    else if (arr[2][2] == n && arr[1][2] == n && arr[0][2] == n)
    {
        return true;
    }
    else if (arr[0][0] == n && arr[1][1] == n && arr[2][2] == n)
    {
        return true;
    }
    else if (arr[2][0] == n && arr[1][1] == n && arr[0][2] == n)
    {
        return true;
    }
    else if (arr[1][0] == n && arr[1][1] == n && arr[1][2] == n)
    {
        return true;
    }
    else if (arr[0][1] == n && arr[1][1] == n && arr[2][1] == n)
    {
        return true;
    }

    return false;
}