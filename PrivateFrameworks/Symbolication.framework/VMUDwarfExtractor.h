/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUMachOHeader, NSMutableDictionary, <VMUMemory>;

@interface VMUDwarfExtractor : VMUSymbolExtractor  {
    BOOL _shouldUseTaskBasedAddresses;
    NSMutableDictionary *_abbrevDicts;
    <VMUMemory> *_infoMem;
    <VMUMemory> *_abbrevMem;
    <VMUMemory> *_lineMem;
    <VMUMemory> *_strMem;
    VMUMachOHeader *_hdr;
}

+ (id)dwarfExtractorWithMachOHeader:(id)arg1;
+ (unsigned long long)constantClassAttributeWithMemoryView:(id)arg1 form:(unsigned long long)arg2;

- (void)dealloc;
- (void)parseCompilationUnitWithMemoryView:(id)arg1 withHeader:(id)arg2;
- (id)parseAbbrevDictionaryAtOffset:(unsigned int)arg1;
- (void)parseLineNumberMatrixAtOffset:(unsigned long long)arg1 withBaseDirectory:(id)arg2 withWordSize:(unsigned char)arg3;
- (id)initWithMachOHeader:(id)arg1;

@end
