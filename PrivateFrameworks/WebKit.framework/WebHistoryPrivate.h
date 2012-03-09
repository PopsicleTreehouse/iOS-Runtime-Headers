/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, NSMutableArray;

@interface WebHistoryPrivate : NSObject  {
    NSMutableDictionary *_entriesByURL;
    struct HashMap<long long int,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > { struct HashTable<long long int,std::pair<long long int, WTF::RetainPtr<NSMutableArray> >,WTF::PairFirstExtractor<std::pair<long long int, WTF::RetainPtr<NSMutableArray> > >,WTF::IntHash<long long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long long int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >,WTF::HashTraits<long long int> > { 
            struct pair<long long int,WTF::RetainPtr<NSMutableArray> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } x1; } *_entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    BOOL itemLimitSet;
    int itemLimit;
    BOOL ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;

- (BOOL)removeAllItems;
- (BOOL)removeItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)removeItems:(id)arg1;
- (BOOL)findKey:(long long*)arg1 forDay:(double)arg2;
- (BOOL)removeItemFromDateCaches:(id)arg1;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (void)addItemToDateCaches:(id)arg1;
- (BOOL)removeItemForURLString:(id)arg1;
- (BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2;
- (id)itemForURLString:(id)arg1;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)ageLimitDate;
- (BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3;
- (BOOL)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryItemLimit:(int)arg1;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2 increaseVisitCount:(BOOL)arg3;
- (void)addVisitedLinksToPageGroup:(struct PageGroup { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct HashSet<WebCore::Page*,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct HashTable<WebCore::Page*,WebCore::Page*,WTF::IdentityExtractor<WebCore::Page*>,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct Page {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashSet<long long unsigned int,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int> > { struct HashTable<long long unsigned int,long long unsigned int,WTF::IdentityExtractor<long long unsigned int>,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int>,WTF::HashTraits<long long unsigned int> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; boolx4; unsigned int x5; struct RefPtr<WebCore::StorageNamespace> { struct StorageNamespace {} *x_6_1_1; } x6; struct OwnPtr<WTF::HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>, WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*> > > { struct HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>,WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*,WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*> > {} *x_7_1_1; } x7; struct OwnPtr<WTF::HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>, WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*> > > { struct HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>,WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*,WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*> > {} *x_8_1_1; } x8; struct OwnPtr<WebCore::GroupSettings> { struct GroupSettings {} *x_9_1_1; } x9; }*)arg1;
- (id)itemForURL:(id)arg1;
- (void)addItems:(id)arg1;
- (void)finalize;
- (id)data;
- (id)allItems;

@end
