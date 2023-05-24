using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ExtensionMethods
{
    public static void Add<TKey, TValue>(this Dictionary<TKey, TValue> d, IEnumerable<TKey> keys, TValue value)
    {
        foreach (var key in keys) d.Add(key, value);
    }
}