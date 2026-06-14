all:
	gcc main.c \
	boot/bootloader.c \
	scheduler/task_scheduler.c \
	middleware/can_runtime.c \
	diagnostics/dtc_manager.c \
	safety/safe_mode.c \
	services/runtime_status.c \
	logger/csv_logger.c \
	analytics/runtime_analytics.c \
	-o bcm_sim
