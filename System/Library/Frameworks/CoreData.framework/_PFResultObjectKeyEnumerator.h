/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _PFResultObjectKeyEnumerator : NSEnumerator {

	id _target;
	const id* _keys;
	unsigned long long* _referenceItems;
	NSRange _range;
	unsigned long long _index;

}
-(id)nextObject;
-(void)dealloc;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(NSRange)arg4 ;
@end
