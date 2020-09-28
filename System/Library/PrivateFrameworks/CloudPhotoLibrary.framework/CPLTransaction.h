/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CPLTransaction : NSObject {

	BOOL _dirty;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(unsigned long long)transactionCount;
+(id)transactions;
+(void)endTransactionWithIdentifier:(id)arg1 ;
+(void)beginTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
+(id)newTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
-(NSString *)identifier;
-(void)endTransaction;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
@end
