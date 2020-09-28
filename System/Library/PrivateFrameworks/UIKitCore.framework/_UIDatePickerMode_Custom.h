/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString, NSArray;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {

	NSString* _originalFormat;
	NSArray* _components;
	NSArray* _sortedComponents;
	long long _displayedUnits;
	long long _desiredUnits;

}
-(id)components;
-(void)noteCalendarChanged;
-(id)initWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(void)resetComponentWidths;
-(long long)componentForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)numberOfComponents;
-(unsigned long long)calendarUnitForComponent:(long long)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(unsigned long long)extractableCalendarUnits;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(long long)displayedCalendarUnits;
-(long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)numberOfRowsInComponent:(long long)arg1 ;
-(id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1 ;
-(id)_componentForCalendarUnit:(unsigned long long)arg1 ;
@end
