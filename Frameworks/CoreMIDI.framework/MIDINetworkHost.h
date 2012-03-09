/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface MIDINetworkHost : NSObject  {

  /* Error parsing encoded ivar type info: ^{_MIDINetworkHostImpl=@"NSString"@"NSString"I@"NSString"@"NSString"} */
    struct _MIDINetworkHostImpl { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const int x6; in void*x7; void*x8; id x9; void*x10; inout unsigned short x11; unsigned short x12; void*x13; const int x14; in void*x15; void*x16; unsigned int x17; id x18; void*x19; inout unsigned short x20; unsigned short x21; void*x22; const int x23; in void*x24; void*x25; NSString *x26; } *_impl;

}

@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * address;
@property(readonly) unsigned int port;
@property(retain,readonly) NSString * netServiceName;
@property(retain,readonly) NSString * netServiceDomain;

+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned int)arg3;

- (BOOL)hasSameAddressAs:(id)arg1;
- (id)addressAsText;
- (id)netServiceName;
- (id)netServiceDomain;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)address;
- (id)displayName;
- (unsigned int)port;
- (id)host;
- (id)name;

@end
