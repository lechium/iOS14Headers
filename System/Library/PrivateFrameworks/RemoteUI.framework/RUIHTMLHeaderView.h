/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <libobjc.A.dylib/RUIHeader.h>

@protocol RUIHeaderDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RUIHeader> {

	RUIWebContainerView* _webContainerView;
	BOOL _isFirstSection;
	id<RUIHeaderDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUIHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<RUIHeaderDelegate>)arg1 ;
-(id<RUIHeaderDelegate>)delegate;
-(id)initWithAttributes:(id)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
@end

