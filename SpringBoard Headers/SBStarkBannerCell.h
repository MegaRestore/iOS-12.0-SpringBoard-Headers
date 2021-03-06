//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCollectionViewCell.h"

@class SBBannerContextView, UIImageView;

@interface SBStarkBannerCell : SBCollectionViewCell
{
    id <SBStarkSessionConfiguring> _starkSessionConfiguration;
    UIImageView *_dropShadowImageView;
    SBBannerContextView *_bannerContextView;
}

@property(retain, nonatomic) SBBannerContextView *bannerContextView; // @synthesize bannerContextView=_bannerContextView;
@property(retain, nonatomic) id <SBStarkSessionConfiguring> starkSessionConfiguration; // @synthesize starkSessionConfiguration=_starkSessionConfiguration;
- (void).cxx_destruct;
- (id)bannerContext;
- (_Bool)_disableRasterizeInAnimations;
- (void)prepareForReuse;
- (void)noteDidDismiss;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

