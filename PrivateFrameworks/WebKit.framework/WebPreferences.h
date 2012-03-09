/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebPreferencesPrivate;

@interface WebPreferences : NSObject <NSCoding> {
    WebPreferencesPrivate *_private;
}

+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (id)_IBCreatorID;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (unsigned long)_systemCFStringEncoding;
+ (id)standardPreferences;
+ (void)initialize;
+ (id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(BOOL)arg2;

- (id)init;
- (void)dealloc;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (BOOL)isDNSPrefetchingEnabled;
- (BOOL)developerExtrasEnabled;
- (BOOL)authorAndUserStylesEnabled;
- (BOOL)applicationChromeModeEnabled;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (BOOL)webArchiveDebugModeEnabled;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (BOOL)localFileContentSniffingEnabled;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (BOOL)offlineWebApplicationCacheEnabled;
- (BOOL)zoomsTextOnly;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)javaScriptCanAccessClipboard;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (BOOL)isXSSAuditorEnabled;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (BOOL)shrinksStandaloneImagesToFit;
- (BOOL)usesEncodingDetector;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (BOOL)isWebSecurityEnabled;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (BOOL)allowUniversalAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowFileAccessFromFileURLs;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (double)_backForwardCacheExpirationInterval;
- (unsigned long)_maximumImageSize;
- (BOOL)_standalone;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (BOOL)_telephoneNumberParsingEnabled;
- (float)_minimumZoomFontSize;
- (int)_layoutInterval;
- (void)_setMaxParseDuration:(float)arg1;
- (float)_maxParseDuration;
- (void)_setPageCacheSize:(int)arg1;
- (int)_pageCacheSize;
- (void)_setObjectCacheSize:(int)arg1;
- (int)_objectCacheSize;
- (void)_setNSURLMemoryCacheSize:(int)arg1;
- (int)_NSURLMemoryCacheSize;
- (void)_setNSURLDiskCacheSize:(int)arg1;
- (int)_NSURLDiskCacheSize;
- (void)_setNSURLMaxRequestSize:(int)arg1;
- (int)_NSURLMaxRequestSize;
- (BOOL)_alwaysUseBaselineOfPrimaryFont;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)arg1;
- (BOOL)_useLegacyNumberInputFieldFormatting;
- (void)_setAggressivePreloading:(BOOL)arg1;
- (BOOL)_aggressivePreloading;
- (BOOL)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)arg1;
- (BOOL)_allowCompositingLayerVisualDegradation;
- (long long)applicationCacheTotalQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (int)editableLinkBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)databasesEnabled;
- (BOOL)storageTrackerEnabled;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (BOOL)localStorageEnabled;
- (BOOL)experimentalNotificationsEnabled;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (void)_postPreferencesChangedAPINotification;
- (BOOL)isDOMPasteAllowed;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (id)_localStorageDatabasePath;
- (id)_ftpDirectoryTemplatePath;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (BOOL)acceleratedDrawingEnabled;
- (BOOL)canvasUsesAcceleratedDrawing;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (BOOL)acceleratedCompositingEnabled;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (BOOL)showDebugBorders;
- (void)setShowDebugBorders:(BOOL)arg1;
- (BOOL)showRepaintCounter;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (BOOL)webAudioEnabled;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (BOOL)diskImageCacheEnabled;
- (unsigned int)diskImageCacheMinimumImageSize;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (id)_diskImageCacheSavedCacheDirectory;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (BOOL)webInspectorServerEnabled;
- (void)setWebInspectorServerEnabled:(BOOL)arg1;
- (short)webInspectorServerPort;
- (void)setWebInspectorServerPort:(short)arg1;
- (unsigned int)pluginAllowedRunTime;
- (void)setPluginAllowedRunTime:(unsigned int)arg1;
- (BOOL)isFrameFlatteningEnabled;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (BOOL)isSpatialNavigationEnabled;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (BOOL)paginateDuringLayoutEnabled;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (BOOL)memoryInfoEnabled;
- (void)setMemoryInfoEnabled:(BOOL)arg1;
- (BOOL)hyperlinkAuditingEnabled;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (int)editingBehavior;
- (void)setEditingBehavior:(int)arg1;
- (BOOL)usePreHTML5ParserQuirks;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (void)didRemoveFromWebView;
- (void)willAddToWebView;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (BOOL)fullScreenEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (BOOL)asynchronousSpellCheckingEnabled;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (BOOL)isAVFoundationEnabled;
- (void)_invalidateCachedPreferences;
- (id)pictographFontFamily;
- (void)setPictographFontFamily:(id)arg1;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (id)standardFontFamily;
- (id)fixedFontFamily;
- (void)setFixedFontFamily:(id)arg1;
- (id)serifFontFamily;
- (void)setSerifFontFamily:(id)arg1;
- (id)sansSerifFontFamily;
- (void)setSansSerifFontFamily:(id)arg1;
- (id)cursiveFontFamily;
- (void)setCursiveFontFamily:(id)arg1;
- (id)fantasyFontFamily;
- (void)setFantasyFontFamily:(id)arg1;
- (int)defaultFixedFontSize;
- (void)setDefaultFixedFontSize:(int)arg1;
- (int)minimumLogicalFontSize;
- (id)defaultTextEncodingName;
- (BOOL)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (void)setUserStyleSheetLocation:(id)arg1;
- (BOOL)isJavaEnabled;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (BOOL)allowsAnimatedImages;
- (BOOL)allowsAnimatedImageLooping;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (BOOL)loadsImagesAutomatically;
- (BOOL)autosaves;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (void)_postPreferencesChangedNotification;
- (id)_valueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (int)_integerValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (BOOL)_boolValueForKey:(id)arg1;
- (long long)_longLongValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (int)_unsignedShortValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setUnsignedShortValue:(int)arg1 forKey:(id)arg2;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (BOOL)automaticallyDetectsCacheModel;
- (unsigned int)cacheModel;
- (BOOL)arePlugInsEnabled;
- (BOOL)usesPageCache;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (BOOL)mediaPlaybackAllowsInline;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (BOOL)privateBrowsingEnabled;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (BOOL)isJavaScriptEnabled;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setAutosaves:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1;
- (id)identifier;
- (void)setMinimumFontSize:(int)arg1;
- (int)minimumFontSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)defaultFontSize;
- (BOOL)webGLEnabled;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (void)setCacheModel:(unsigned int)arg1;
- (void)setUsesPageCache:(BOOL)arg1;

@end
