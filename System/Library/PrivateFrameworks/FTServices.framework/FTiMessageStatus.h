/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTServiceStatus;

@interface FTiMessageStatus : NSObject {

	FTServiceStatus* _serviceStatus;

}

@property (nonatomic,readonly) FTServiceStatus * serviceStatus;              //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
+(id)sharedInstance;
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(FTServiceStatus *)serviceStatus;
@end
