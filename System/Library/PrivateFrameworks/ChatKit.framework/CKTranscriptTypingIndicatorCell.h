/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>
#import <libobjc.A.dylib/CKLayerDelegate.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate> {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(void)setTraitCollection:(id)arg1 ;
-(void)prepareForReuse;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)dealloc;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)setOrientation:(char)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)layoutSubviewsForAlignmentContents;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(CKTypingView *)typingView;
@end
