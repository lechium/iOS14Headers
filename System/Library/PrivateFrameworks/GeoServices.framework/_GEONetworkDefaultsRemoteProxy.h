/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;
@class geo_isolater, NSMutableArray, NSString;

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	geo_isolater* _isolation;
	NSMutableArray* _updateCompletionHandlers;
	int _configChangedToken;

}

@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)_networkDefaultsDidChange;
@end
