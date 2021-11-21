using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class SearchDictionary<T>{
  private Dictionary<string, HashSet<T>> dictionary = new Dictionary<string, HashSet<T>>();
  private Dictionary<string, string> variants = new Dictionary<string, string>();

  public int Count {get {return dictionary.Count;}}

  // MetaToWords given a phrase returns a list of words
  public static string[] MetaToWords(string text){
    string desc = text.ToLower();
    desc = Regex.Replace(desc, @"([\.,\d]|[^\w ]|all[^\w]|the[^\w]|and[^\w]|are[^\w]|for[^\w]|but[^\w]|who[^\w]|their[^\w]|using[^\w]|our[^\w]|your[^\w])", "");
    // desc = Regex.Replace(desc, @"(s |s$)", " ");
    return desc.Split(' ');
  }

  public bool Contains(string word) {
    return dictionary.ContainsKey(word);
  }
  public bool ContainsVariant(string word) {
    return variants.ContainsKey(word);
  }


  public List<T> Search(string phrase) {
    return Search(MetaToWords(phrase));
  }
  public List<T> Search(string[] words) {
    HashSet<T> rset = new HashSet<T>();
    foreach (string word in words) {
      Debug.Log(word);
      if (Contains(word)) {
        Debug.Log(dictionary[word].Count);
        rset.UnionWith(dictionary[word]);
      }
    }

    List<T> results = new List<T>();
    foreach (T item in rset) {
      results.Add(item);
    }
    return results;
  }


  public string Suggestion(string phrase) {
    string[] words = MetaToWords(phrase);
    string lastWord = words[words.Length - 1];
    string suggestion = "";

    if (ContainsVariant(lastWord)) {
      string sword = variants[lastWord];
      if (sword.Length > lastWord.Length) {
        suggestion = phrase + sword.Substring(lastWord.Length);
      }
    }

    return suggestion;
  }

  public void AddByPhrase(string phrase, T item) {
    AddByWords(MetaToWords(phrase), item);
  }
  public void AddByWords(string[] words, T item) {
    foreach (string word in words) {
      AddByWord(word, item);
    }
  }
  public void AddByWord(string word, T item){
    if (word.Length > 2) {
      if (!Contains(word)) {
        AddWord(word);
      }
      dictionary[word].Add(item);
    }
  }

  private void AddVariants(string word) {
    AddVariants(word, word);
  }
  private void AddVariants(string word, string fullWord) {
    if (word.Length > 2) {
      string variant = word.Substring(0, word.Length - 1);
      if (!ContainsVariant(variant) ||
          variants[variant].Length > fullWord.Length) {

        variants[variant] = fullWord;
      }
      AddVariants(variant, fullWord);
    }
  }
  private void AddWord(string word){
    dictionary[word] = new HashSet<T>();
    AddVariants(word);
  }

  public void Log(){
    foreach (KeyValuePair<string, HashSet<T>> kv in dictionary) {
      Debug.Log($"{kv.Key}: {kv.Value.Count}");
    }
  }
}
