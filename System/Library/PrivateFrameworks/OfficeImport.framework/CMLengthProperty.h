/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(int)compareValue:(id)arg1 ;
-(int)unitType;
-(id)initWithNumber:(double)arg1 ;
-(double)value;
-(int)intValue;
-(id)description;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end
