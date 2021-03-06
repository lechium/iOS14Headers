/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKDateRange.h>
@class NSDate, NSString;


@protocol NPKDateRange <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) NSString * startDateString; 
@property (nonatomic,readonly) NSString * expiryDateString; 
@required
-(NSDate *)expiryDate;
-(NSDate *)startDate;
-(NSString *)expiryDateString;
-(NSString *)startDateString;

@end


@class NSDate, NSString;

@interface NPKDateRange : NSObject <NPKDateRange> {

	NSDate* _startDate;
	NSString* _startDateString;
	NSDate* _expiryDate;
	NSString* _expiryDateString;

}

@property (nonatomic,readonly) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSString * startDateString;               //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,readonly) NSString * expiryDateString;              //@synthesize expiryDateString=_expiryDateString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2 ;
-(NSDate *)expiryDate;
-(NSDate *)startDate;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(id)initWithStartDate:(id)arg1 expirationDate:(id)arg2 formatterStyle:(unsigned long long)arg3 ;
@end

