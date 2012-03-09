/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class CALayer;

@interface TileHostLayer : CALayer  {
    struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x2; struct IntPoint { 
            int m_x; 
            int m_y; 
        } x3; struct IntSize { 
            int m_width; 
            int m_height; 
        } x4; float x5; struct HashMap<WebCore::IntPoint,WTF::RefPtr<WebCore::TileGridTile>,WTF::IntPointHash,WTF::HashTraits<WebCore::IntPoint>,WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > > { 
            struct HashTable<WebCore::IntPoint,std::pair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> >,WTF::PairFirstExtractor<std::pair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > >,WTF::IntPointHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > >,WTF::HashTraits<WebCore::IntPoint> > { 
                struct pair<WebCore::IntPoint,WTF::RefPtr<WebCore::TileGridTile> > {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x6; struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } x7; } *_tileGrid;
}


- (id)actionForKey:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (id)initWithTileGrid:(struct TileGrid { struct TileCache {} *x1; struct RetainPtr<CALayer> { id x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint,WTF::RefPtr<WebCore::TileGridTile>,WTF::IntPointHash,WTF::HashTraits<WebCore::IntPoint>,WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > > { struct HashTable<WebCore::IntPoint,std::pair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> >,WTF::PairFirstExtractor<std::pair<WebCore::IntPoint, WTF::RefPtr<WebCore::TileGridTile> > >,WTF::IntPointHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::TileGridTile> > >,WTF::HashTraits<WebCore::IntPoint> > { struct pair<WebCore::IntPoint,WTF::RefPtr<WebCore::TileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)arg1;

@end
