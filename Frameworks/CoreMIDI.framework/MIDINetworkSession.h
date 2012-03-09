/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableSet;

@interface MIDINetworkSession : NSObject  {

  /* Error parsing encoded ivar type info: ^{_MIDINetworkSessionImpl=^{OpaqueMIDIEntity}^{OpaqueMIDIEndpoint}^{OpaqueMIDIEndpoint}@"NSString"@"NSMutableDictionary"{ContactOrConnectionSet="mItemsAreConnections"B"mSet"@"NSMutableSet"}} */
    struct _MIDINetworkSessionImpl { struct OpaqueMIDIEntity {} *x1; struct OpaqueMIDIEndpoint {} *x2; struct OpaqueMIDIEndpoint {} *x3; id x4; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x5; inout unsigned short x6; unsigned short x7; void*x8; const int x9; in void*x10; void*x11; id x12; void*x13; inout unsigned short x14; void*x15; void*x16; void*x17; void*x18; unsigned int x19/* : ? */; long x20; void*x21; void*x22; int x23; BOOL x24; void*x25; int x26; out in void*x27; const void*x28; void*x29; struct ContactOrConnectionSet { 
            boolmItemsAreConnections; 
            NSMutableSet *mSet; 
        } x30; } *_impl;

}

@property(getter=isEnabled) BOOL enabled;
@property(readonly) unsigned int networkPort;
@property(readonly) NSString * networkName;
@property(readonly) NSString * localName;
@property unsigned int connectionPolicy;

+ (id)defaultSession;

- (unsigned int)networkPort;
- (unsigned int)connectionPolicy;
- (void)setConnectionPolicy:(unsigned int)arg1;
- (BOOL)addContact:(id)arg1;
- (BOOL)removeContact:(id)arg1;
- (struct OpaqueMIDIEndpoint { }*)sourceEndpoint;
- (struct OpaqueMIDIEndpoint { }*)destinationEndpoint;
- (void)sessionChanged;
- (void)contactsChanged;
- (void)setStateToEntity;
- (void)updateFromEntity;
- (void)refreshBonjourName;
- (BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)addConnection:(id)arg1;
- (BOOL)removeConnection:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)localName;
- (id)contacts;
- (id)networkName;
- (id)connections;

@end
