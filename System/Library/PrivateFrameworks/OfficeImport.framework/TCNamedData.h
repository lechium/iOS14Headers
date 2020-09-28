/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface TCNamedData : NSObject {

	NSData* mData;
	NSString* mName;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
+(id)namedDataWithData:(id)arg1 named:(id)arg2 ;
-(NSData *)data;
-(NSString *)name;
-(id)initWithData:(id)arg1 named:(id)arg2 ;
@end
