/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol _SiriUICardLoaderDelegate;
@class NSString;

@interface _SiriUICardLoader : NSObject <SFResourceLoader> {

	BOOL _active;
	id<_SiriUICardLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SiriUICardLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)loadCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_SiriUICardLoaderDelegate>)arg1 ;
-(id<_SiriUICardLoaderDelegate>)delegate;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundation;
@end

