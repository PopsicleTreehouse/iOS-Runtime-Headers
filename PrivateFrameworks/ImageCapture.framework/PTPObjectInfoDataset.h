/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPObjectInfoDataset : NSObject  {
    unsigned int _storageID;
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    unsigned long long _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned int _thumbCompressedSize;
    unsigned int _thumbOffset;
    unsigned int _thumbPixWidth;
    unsigned int _thumbPixHeight;
    unsigned int _imagePixWidth;
    unsigned int _imagePixHeight;
    unsigned int _imageBitDepth;
    unsigned int _parentObject;
    unsigned short _associationType;
    unsigned int _associationDesc;
    unsigned int _sequenceNumber;
    NSString *_filename;
    NSString *_captureDate;
    NSString *_modificationDate;
    NSString *_keywords;
    unsigned int _thmFileSize;
    unsigned int _objectHandle;
}


- (id)modificationDate;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)captureDate;
- (void)setCaptureDate:(id)arg1;
- (void)setSequenceNumber:(unsigned long)arg1;
- (unsigned long)sequenceNumber;
- (id)content64;
- (void)setStorageID:(unsigned long)arg1;
- (void)setObjectFormat:(unsigned short)arg1;
- (void)setProtectionStatus:(unsigned short)arg1;
- (unsigned short)thumbFormat;
- (void)setThumbFormat:(unsigned short)arg1;
- (void)setThumbCompressedSize:(unsigned long)arg1;
- (unsigned long)thmFileSize;
- (void)setThmFileSize:(unsigned long)arg1;
- (unsigned long)thumbOffset;
- (void)setThumbOffset:(unsigned long)arg1;
- (unsigned long)thumbPixWidth;
- (void)setThumbPixWidth:(unsigned long)arg1;
- (unsigned long)thumbPixHeight;
- (void)setThumbPixHeight:(unsigned long)arg1;
- (void)setImagePixWidth:(unsigned long)arg1;
- (void)setImagePixHeight:(unsigned long)arg1;
- (void)setImageBitDepth:(unsigned long)arg1;
- (void)setParentObject:(unsigned long)arg1;
- (void)setAssociationType:(unsigned short)arg1;
- (unsigned long)associationDesc;
- (void)setAssociationDesc:(unsigned long)arg1;
- (unsigned long)parentObject;
- (unsigned short)protectionStatus;
- (unsigned long)storageID;
- (unsigned short)objectFormat;
- (unsigned short)associationType;
- (unsigned long long)objectCompressedSize64;
- (unsigned long)thumbCompressedSize;
- (unsigned long)objectHandle;
- (unsigned long)imagePixWidth;
- (unsigned long)imagePixHeight;
- (unsigned long)imageBitDepth;
- (void)setObjectHandle:(unsigned long)arg1;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (id)initWithData64:(id)arg1;
- (unsigned long)objectCompressedSize;
- (id)content;
- (id)initWithData:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setModificationDate:(id)arg1;

@end
