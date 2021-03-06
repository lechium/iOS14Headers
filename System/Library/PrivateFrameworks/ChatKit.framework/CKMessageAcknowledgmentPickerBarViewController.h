/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKMessageAcknowledgmentPickerBarItemViewDelegate.h>

@protocol CKMessageAcknowledgmentPickerBarDelegate;
@class CKMessagePartChatItem;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate> {

	id<CKMessageAcknowledgmentPickerBarDelegate> _delegate;
	CKMessagePartChatItem* _chatItem;

}

@property (assign,nonatomic,__weak) id<CKMessageAcknowledgmentPickerBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * chatItem;                                          //@synthesize chatItem=_chatItem - In the implementation block
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 pickerFrame:(CGRect)arg2 ;
-(void)performShowAnimation:(/*^block*/id)arg1 ;
-(void)performSendAnimation:(/*^block*/id)arg1 ;
-(void)performCancelAnimation:(/*^block*/id)arg1 ;
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 ;
-(CGRect)calculateFrameRelativeToSiblingViewFrame:(CGRect)arg1 withinBounds:(CGRect)arg2 ;
-(void)loadView;
-(CKMessagePartChatItem *)chatItem;
-(void)pickerBarItemViewSelectionDidChange:(id)arg1 ;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)setDelegate:(id<CKMessageAcknowledgmentPickerBarDelegate>)arg1 ;
-(id<CKMessageAcknowledgmentPickerBarDelegate>)delegate;
-(id)pickerView;
-(id)initWithChatItem:(id)arg1 ;
@end

