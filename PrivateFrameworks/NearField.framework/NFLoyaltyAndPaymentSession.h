/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFLoyaltyAndPaymentSession : NFSession {
    NFApplet * _activeApplet;
    NSDictionary * _appletsById;
    NFApplet * _defaultApplet;
    NFWeakReference * _delegate;
    bool  _emulationActive;
    bool  _fieldNotificationSent;
    unsigned long long  _numActiveSEs;
    bool  _pendingServerRequest;
    bool  _vasTransactionInProgress;
}

@property (readonly) NFApplet *activeApplet;
@property (readonly) NFApplet *defaultApplet;
@property <NFLoyaltyAndPaymentSessionDelegate> *delegate;
@property (readonly) unsigned long long numberOfActiveSecureElements;

- (bool)_startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)_startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)_startHostCardEmulation:(id*)arg1;
- (id)activeApplet;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultApplet;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)arg1;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didReceiveActivityTimeout:(id)arg1;
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)arg1;
- (void)didSelectValueAddedService:(bool)arg1;
- (void)didStartSession:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (bool)enablePlasticCardMode:(bool)arg1;
- (bool)enablePlasticCardMode:(bool)arg1 error:(id*)arg2;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)felicaAppletState:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id*)arg2;
- (unsigned long long)numberOfActiveSecureElements;
- (bool)setActivePaymentApplet:(id)arg1;
- (bool)setActivePaymentApplet:(id)arg1 error:(id*)arg2;
- (bool)setActivePaymentApplet:(id)arg1 makeDefault:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setHostCards:(id)arg1;
- (bool)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (bool)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id*)arg3;
- (bool)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (bool)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id*)arg3;
- (bool)startHostCardEmulation;
- (bool)startHostCardEmulation:(id*)arg1;
- (bool)stopCardEmulation;
- (bool)stopCardEmulation:(id*)arg1;
- (id)transitAppletState:(id)arg1 error:(id*)arg2;

@end