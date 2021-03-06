//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject
{
    _Bool _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSMutableSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

@property(retain, nonatomic) NSMutableSet *participatingPressTypes; // @synthesize participatingPressTypes=_participatingPressTypes;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property(copy, nonatomic) NSDate *clawEventTimestamp; // @synthesize clawEventTimestamp=_clawEventTimestamp;
- (void).cxx_destruct;
- (void)_resetLoggedData;
- (void)_publishLoggedData;
- (void)noteSOSTriggered;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (id)init;

@end

