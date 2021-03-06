/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <FontServices/FontInstallViewServiceProtocol.h>

@class NSXPCListener, NSString;

@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol> {

	/*^block*/id _completionHandler;
	NSXPCListener* _listener;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSXPCListener *)listener;
-(id)completionHandler;
-(void)doneWithDeleteAppFonts:(BOOL)arg1 ;
-(void)showDialogWithUserInfo:(id)arg1 ;
@end

