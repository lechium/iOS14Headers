/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString;

@interface HKConceptIndexKeyPath : NSObject {

	NSString* _fullKeyPath;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSString * fullKeyPath;              //@synthesize fullKeyPath=_fullKeyPath - In the implementation block
@property (nonatomic,readonly) NSRange range;                            //@synthesize range=_range - In the implementation block
+(id)conceptIndexKeyPathWithFullKeyPath:(id)arg1 error:(id*)arg2 ;
-(NSRange)range;
-(id)tail;
-(id)head;
-(id)init;
-(NSString *)fullKeyPath;
-(id)initWithFullKeyPath:(id)arg1 range:(NSRange)arg2 ;
@end
