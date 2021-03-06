/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTime/ScreenTime-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/STWebServiceDelegate.h>

@class NSString;

@interface STWebRemoteViewController : _UIRemoteViewController <STWebServiceDelegate> {

	BOOL _URLIsBlocked;

}

@property (assign) BOOL URLIsBlocked;                               //@synthesize URLIsBlocked=_URLIsBlocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)instantiateWebViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setURLIsBlocked:(BOOL)arg1 ;
-(BOOL)URLIsBlocked;
-(void)setURLIsBlocked:(BOOL)arg1 replyHandler:(/*^block*/id)arg2 ;
@end

