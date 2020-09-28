/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {

	ATXHeuristicObjectHandle* _event;
	NSString* _suggestionsInfoUniqueKey;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4 ;
@end
