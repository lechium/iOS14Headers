/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXAxis : NSObject
+(Class)chxAxisClassWithXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)chdAxisFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readScalingFromXmlScalingElement:(xmlNode*)arg1 axis:(id)arg2 state:(id)arg3 ;
+(int)chdAxisPositionFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdTickMarkFromXmlTickMarkElement:(xmlNode*)arg1 ;
+(int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode*)arg1 ;
+(int)chdCrossesFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)chxAxisClassWithChdAxis:(id)arg1 ;
@end
