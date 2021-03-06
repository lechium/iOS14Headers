/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface PLXPCTransaction : NSObject {

	const char* _identifier;
	NSObject*<OS_os_transaction> _transaction;

}
+(void)initialize;
+(id)callStackSymbols;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(id)transaction:(const char*)arg1 ;
+(id)openXPCTransactionStatus;
-(id)initWithIdentifier:(const char*)arg1 ;
-(id)_statusDescription;
-(void)dealloc;
-(void)stillAlive;
-(id)description;
@end

