/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString;

@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate> {

	CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>* _completionHandler;
	RefPtr<const WebKit::SafeBrowsingWarning, WTF::DumbPtrTraits<const WebKit::SafeBrowsingWarning> >* _warning;
	WeakObjCPtr<WKSafeBrowsingTextView> _details;
	WeakObjCPtr<WKSafeBrowsingBox> _box;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithFrame:(CGRect)arg1 safeBrowsingWarning:(const SafeBrowsingWarning*)arg2 completionHandler:(CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>*)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)addContent;
-(void)showDetailsClicked;
-(void)goBackClicked;
-(void)clickedOnLink:(id)arg1 ;
-(void)didMoveToWindow;
-(void)updateContentSize;
-(void)layoutText;
-(BOOL)forMainFrameNavigation;
@end

