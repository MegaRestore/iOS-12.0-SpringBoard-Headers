//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBIconDraggingEditContext : NSObject
{
    _Bool _enteredScreenLocationNeedsUpdate;
    id _draggingUniqueIdentifier;
    struct CGPoint _enteredScreenLocation;
}

@property(nonatomic) _Bool enteredScreenLocationNeedsUpdate; // @synthesize enteredScreenLocationNeedsUpdate=_enteredScreenLocationNeedsUpdate;
@property(nonatomic) struct CGPoint enteredScreenLocation; // @synthesize enteredScreenLocation=_enteredScreenLocation;
@property(retain, nonatomic) id draggingUniqueIdentifier; // @synthesize draggingUniqueIdentifier=_draggingUniqueIdentifier;
- (void).cxx_destruct;

@end
