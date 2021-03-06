/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol CKConversationListCellDelegate;
@class UIButton, CKAvatarView, NSObject;

@interface CKConversationListNewMessageCell : UITableViewCell {

	UIButton* _closeButton;
	CKAvatarView* _avatarView;
	NSObject*<CKConversationListCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)identifier;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)avatarView;
-(BOOL)_isCollapsed;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)setDelegate:(NSObject*<CKConversationListCellDelegate>)arg1 ;
-(void)deleteButtonTapped;
-(BOOL)showingEditControl;
-(void)updateWithForwardedConfigurationState:(unsigned long long)arg1 ;
-(NSObject*<CKConversationListCellDelegate>)delegate;
-(void)updateFontSize;
-(double)leadingLayoutMargin;
-(BOOL)_boundsShouldCollapseContent:(CGRect)arg1 ;
-(void)_updateLabelVisibility;
@end

