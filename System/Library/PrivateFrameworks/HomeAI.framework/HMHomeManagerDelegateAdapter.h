/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class NSString;

@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate> {

	/*^block*/id _didUpdateHomes;

}

@property (copy) id didUpdateHomes;                                 //@synthesize didUpdateHomes=_didUpdateHomes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)didUpdateHomes;
-(void)setDidUpdateHomes:(id)arg1 ;
@end
