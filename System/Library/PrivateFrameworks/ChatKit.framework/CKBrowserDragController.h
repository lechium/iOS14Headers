/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol CKBrowserDragControllerDelegate;
@interface CKBrowserDragController : UIViewController {

	id<CKBrowserDragControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CKBrowserDragControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CKBrowserDragControllerDelegate>)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id<CKBrowserDragControllerDelegate>)delegate;
@end

