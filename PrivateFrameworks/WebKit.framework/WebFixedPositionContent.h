/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WebFixedPositionContent : NSObject  {

  /* Error parsing encoded ivar type info: ^{WebFixedPositionContentData=@"WebView"{HashMap<WTF::RetainPtr<CALayer>,LayerInfo,WTF::PtrHash<WTF::RetainPtr<CALayer> >,WTF::HashTraits<WTF::RetainPtr<CALayer> >,WTF::HashTraits<LayerInfo> >="m_impl"{HashTable<WTF::RetainPtr<CALayer>,std::pair<WTF::RetainPtr<CALayer>, LayerInfo>,WTF::PairFirstExtractor<std::pair<WTF::RetainPtr<CALayer>, LayerInfo> >,WTF::PtrHash<WTF::RetainPtr<CALayer> >,WTF::PairHashTraits<WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<LayerInfo> >,WTF::HashTraits<WTF::RetainPtr<CALayer> > >="m_table"^{pair<WTF::RetainPtr<CALayer>,LayerInfo>}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}} */
    struct WebFixedPositionContentData { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; void*x3; void*x4; unsigned int x5/* : ? */; oneway int x6; void*x7; void*x8; void*x9; struct HashMap<WTF::RetainPtr<CALayer>,LayerInfo,WTF::PtrHash<WTF::RetainPtr<CALayer> >,WTF::HashTraits<WTF::RetainPtr<CALayer> >,WTF::HashTraits<LayerInfo> > { 
            struct HashTable<WTF::RetainPtr<CALayer>,std::pair<WTF::RetainPtr<CALayer>, LayerInfo>,WTF::PairFirstExtractor<std::pair<WTF::RetainPtr<CALayer>, LayerInfo> >,WTF::PtrHash<WTF::RetainPtr<CALayer> >,WTF::PairHashTraits<WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<LayerInfo> >,WTF::HashTraits<WTF::RetainPtr<CALayer> > > { 
                struct pair<WTF::RetainPtr<CALayer>,LayerInfo> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x10; } *_private;

}


- (void)dealloc;
- (void)lockLayers;
- (void)unlockLayers;
- (void)addOrUpdateLayer:(id)arg1 sizing:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 alignmentOffset:(struct CGSize { float x1; float x2; })arg4 insideLayerSync:(BOOL)arg5;
- (void)removeLayer:(id)arg1 insideLayerSync:(BOOL)arg2;
- (void)removeAllLayers;
- (void)didFinishScrollingOrZooming;
- (id)initWithWebView:(id)arg1;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasFixedPositionLayers;

@end
