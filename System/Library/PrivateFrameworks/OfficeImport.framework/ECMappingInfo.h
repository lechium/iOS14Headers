/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECMappingInfo : NSObject {

	NSString* mSheetName;

}

@property (nonatomic,readonly) NSString * sheetName; 
@property (nonatomic,readonly) int rowOffset; 
@property (nonatomic,readonly) int columnOffset; 
+(id)mappingInfoWithSheetName:(id)arg1 ;
-(int)rowOffset;
-(int)columnOffset;
-(NSString *)sheetName;
-(id)initWithSheetName:(id)arg1 ;
@end
