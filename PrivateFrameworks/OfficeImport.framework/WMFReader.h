/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMFPlayer;

@interface WMFReader : NSObject <MFReader> {
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    char *m_pBuffer;
    unsigned int m_cursor;
}


- (oneway void)release;
- (void)dealloc;
- (int)playHeaders;
- (int)playRecord;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (int)moveDataCursor:(unsigned int)arg1;
- (id)initWithWMFPlayer:(id)arg1;
- (int)play:(id)arg1;

@end
