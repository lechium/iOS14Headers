//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CompletionArrowView;

@interface SearchSuggestionTableViewCell : UITableViewCell
{
    CompletionArrowView *_accessoryView;	// 8 = 0x8
    _Bool _hidesAccessoryView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000af9c0
@property(nonatomic) _Bool hidesAccessoryView; // @synthesize hidesAccessoryView=_hidesAccessoryView;
- (void)layoutSubviews;	// IMP=0x00000001000af6a4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000af598
- (void)prepareForReuse;	// IMP=0x00000001000af4d0
@property(nonatomic) _Bool hidesImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000af1b0

@end

