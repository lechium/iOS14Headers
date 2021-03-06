/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FontServices/FontServicesFontPickerSupportProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCConnection, NSString;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListener* _listenerForFontServicesDaemon;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCListener * listenerForFontServicesDaemon;              //@synthesize listenerForFontServicesDaemon=_listenerForFontServicesDaemon - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSXPCConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)init;
-(void)checkin:(/*^block*/id)arg1 ;
-(NSXPCListener *)listener;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)ping:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registeredFontsChanged:(id)arg1 ;
-(void)activateFontsForFontPickerClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)pathsContainsFontAsset:(id)arg1 ;
-(NSXPCListener *)listenerForFontServicesDaemon;
-(void)setListenerForFontServicesDaemon:(NSXPCListener *)arg1 ;
@end

