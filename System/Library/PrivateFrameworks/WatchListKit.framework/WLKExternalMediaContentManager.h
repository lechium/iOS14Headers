/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedManager;
-(id)_proxy;
-(id)_init;
-(id)init;
-(id)_connection;
-(void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)deletePlaybackActivityWithIdentifier:(id)arg1 ;
@end
