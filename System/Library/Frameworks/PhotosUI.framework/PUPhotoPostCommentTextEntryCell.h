/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewCell.h>

@class PUPhotoCommentEntryView;

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell {

	PUPhotoCommentEntryView* _textEntryView;

}

@property (nonatomic,retain) PUPhotoCommentEntryView * textEntryView;              //@synthesize textEntryView=_textEntryView - In the implementation block
+(void)preferredContentSizeDidChange;
+(double)heightForWidth:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextEntryView:(PUPhotoCommentEntryView *)arg1 ;
-(PUPhotoCommentEntryView *)textEntryView;
-(void)layoutSubviews;
@end
