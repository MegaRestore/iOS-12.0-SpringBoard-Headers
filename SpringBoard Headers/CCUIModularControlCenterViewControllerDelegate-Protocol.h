//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIModularControlCenterViewController;

@protocol CCUIModularControlCenterViewControllerDelegate <NSObject>

@optional
- (void)didCloseExpandedModuleForControlCenterViewController:(CCUIModularControlCenterViewController *)arg1;
- (void)willOpenExpandedModuleForControlCenterViewController:(CCUIModularControlCenterViewController *)arg1;
- (void)controlCenterViewControllerDidFinishUserInteractionWithModule:(CCUIModularControlCenterViewController *)arg1;
- (void)controlCenterViewControllerDidBeginUserInteractionWithModule:(CCUIModularControlCenterViewController *)arg1;
@end

