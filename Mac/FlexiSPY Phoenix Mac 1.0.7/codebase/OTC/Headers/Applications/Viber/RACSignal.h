//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class RACSequence;

@interface RACSignal : NSObject
{
}

+ (id)startLazilyWithScheduler:(id)arg1 block:(id)arg2;
+ (id)startEagerlyWithScheduler:(id)arg1 block:(id)arg2;
+ (id)never;
+ (id)error:(id)arg1;
+ (id)createSignal:(id)arg1;
+ (id)return:(id)arg1;
+ (id)empty;
+ (id)startWithScheduler:(id)arg1 block:(id)arg2;
+ (id)start:(id)arg1;
+ (id)startWithScheduler:(id)arg1 subjectBlock:(id)arg2;
+ (id)defer:(id)arg1;
+ (id)if:(id)arg1 then:(id)arg2 else:(id)arg3;
+ (id)switch:(id)arg1 cases:(id)arg2 default:(id)arg3;
+ (id)interval:(double)arg1 onScheduler:(id)arg2 withLeeway:(double)arg3;
+ (id)interval:(double)arg1 onScheduler:(id)arg2;
+ (id)merge:(id)arg1;
+ (id)combineLatest:(id)arg1 reduce:(id)arg2;
+ (id)combineLatest:(id)arg1;
+ (id)interval:(double)arg1 withLeeway:(double)arg2;
+ (id)interval:(double)arg1;
- (id)description;
- (id)zipWith:(id)arg1;
- (id)concat:(id)arg1;
- (id)bind:(id)arg1;
- (id)subscribeError:(id)arg1 completed:(id)arg2;
- (id)subscribeNext:(id)arg1 error:(id)arg2;
- (id)subscribeCompleted:(id)arg1;
- (id)subscribeError:(id)arg1;
- (id)subscribeNext:(id)arg1 error:(id)arg2 completed:(id)arg3;
- (id)subscribeNext:(id)arg1 completed:(id)arg2;
- (id)subscribeNext:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)logCompleted;
- (id)logError;
- (id)logNext;
- (id)logAll;
- (_Bool)asynchronouslyWaitUntilCompleted:(id *)arg1;
- (id)asynchronousFirstOrDefault:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;
- (id)reduceApply;
- (id)or;
- (id)and;
- (id)not;
- (id)dematerialize;
- (id)materialize;
- (id)ignoreValues;
- (id)sample:(id)arg1;
- (id)retry;
- (id)retry:(long long)arg1;
- (id)all:(id)arg1;
- (id)any:(id)arg1;
- (id)any;
- (id)groupBy:(id)arg1;
- (id)groupBy:(id)arg1 transform:(id)arg2;
- (id)deliverOnMainThread;
- (id)subscribeOn:(id)arg1;
- (id)deliverOn:(id)arg1;
- (id)timeout:(double)arg1 onScheduler:(id)arg2;
- (id)replayLazily;
- (id)replayLast;
- (id)replay;
- (id)multicast:(id)arg1;
- (id)publish;
@property(readonly, nonatomic) RACSequence *sequence;
- (id)toArray;
- (_Bool)waitUntilCompleted:(id *)arg1;
- (id)firstOrDefault:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;
- (id)firstOrDefault:(id)arg1;
- (id)first;
- (id)switchToLatest;
- (id)takeUntilReplacement:(id)arg1;
- (id)takeUntil:(id)arg1;
- (id)setKeyPath:(id)arg1 onObject:(id)arg2 nilValue:(id)arg3;
- (id)setKeyPath:(id)arg1 onObject:(id)arg2;
- (id)aggregateWithStart:(id)arg1 reduceWithIndex:(id)arg2;
- (id)aggregateWithStart:(id)arg1 reduce:(id)arg2;
- (id)aggregateWithStartFactory:(id)arg1 reduce:(id)arg2;
- (id)concat;
- (id)then:(id)arg1;
- (id)flatten:(unsigned long long)arg1;
- (id)merge:(id)arg1;
- (id)combineLatestWith:(id)arg1;
- (id)takeLast:(unsigned long long)arg1;
- (id)collect;
- (id)bufferWithTime:(double)arg1 onScheduler:(id)arg2;
- (id)finally:(id)arg1;
- (id)initially:(id)arg1;
- (id)tryMap:(id)arg1;
- (id)try:(id)arg1;
- (id)catchTo:(id)arg1;
- (id)catch:(id)arg1;
- (id)repeat;
- (id)delay:(double)arg1;
- (id)throttle:(double)arg1 valuesPassingTest:(id)arg2;
- (id)throttle:(double)arg1;
- (id)doCompleted:(id)arg1;
- (id)doError:(id)arg1;
- (id)doNext:(id)arg1;
- (id)executeCommand:(id)arg1;
- (id)aggregateWithStartFactory:(id)arg1 combine:(id)arg2;
- (id)aggregateWithStart:(id)arg1 combine:(id)arg2;
- (id)sequenceNext:(id)arg1;
- (id)ignoreElements;
- (id)toProperty:(id)arg1 onObject:(id)arg2;
- (id)bufferWithTime:(double)arg1;
- (id)timeout:(double)arg1;
- (id)let:(id)arg1;
- (id)buffer:(unsigned long long)arg1;
- (id)windowWithStart:(id)arg1 close:(id)arg2;
- (id)vib_subscribeFinally:(id)arg1;
- (id)vib_bufferWithTime:(double)arg1 onScheduler:(id)arg2 maxBufferSize:(unsigned long long)arg3;
- (id)vib_bufferWithTime:(double)arg1 onScheduler:(id)arg2 passthroughIf:(id)arg3;

@end

