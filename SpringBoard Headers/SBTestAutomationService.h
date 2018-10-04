//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemServiceServerTestAutomationDelegate.h"

@class FBServiceClientAuthenticator, NSString;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate>
{
    FBServiceClientAuthenticator *_clientAuthenticator;
    id <BSInvalidatable> _idleTimerAssertion;
}

- (void).cxx_destruct;
- (_Bool)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(_Bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(_Bool)arg3 useSafeTransitions:(_Bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(_Bool)arg3;
- (void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
